#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Класс CReserveInfo - информация о заповеднике
class CReserveInfo {
private:
    string name;
    vector<string> routes;
    vector<string> objects;

public:
    CReserveInfo(const string& reserveName) : name(reserveName) {}

    void AddRoute(const string& route) {
        routes.push_back(route);
    }

    void AddObject(const string& obj) {
        objects.push_back(obj);
    }

    void GetReserveInfo() const {
        cout << "Заповедник: " << name << "\nМаршруты: " << routes.size() << "\nОбъекты: " << objects.size() << endl;
    }
};

// Класс CUserProfile - профиль пользователя
class CUserProfile {
private:
    string username;
    string email;
    vector<string> bookingHistory;

public:
    CUserProfile(const string& user, const string& mail) : username(user), email(mail) {}

    void AddBooking(const string& booking) {
        bookingHistory.push_back(booking);
    }

    void GetUserInfo() const {
        cout << "Пользователь: " << username << "\nEmail: " << email << "\nИстория бронирований: " << bookingHistory.size() << endl;
    }
};

// Класс CBookingManager - управление бронированиями
class CBookingManager {
private:
    vector<string> bookings;

public:
    void Book(const string& route) {
        bookings.push_back(route);
        cout << "Маршрут '" << route << "' забронирован." << endl;
    }

    void GetBookings() const {
        cout << "Всего бронирований: " << bookings.size() << endl;
    }
};

// Класс CMapNavigator - интерактивная карта заповедника
class CMapNavigator {
public:
    void ShowMap() const {
        cout << "Отображение карты заповедника..." << endl;
    }

    void NavigateTo(const string& location) const {
        cout << "Навигация к объекту: " << location << endl;
    }
};

// Класс CNotificationService - сервис уведомлений
class CNotificationService {
public:
    void SendNotification(const string& message) const {
        cout << "Уведомление: " << message << endl;
    }
};

// Класс CFeedbackManager - обратная связь
class CFeedbackManager {
public:
    void SubmitFeedback(const string& feedback) const {
        cout << "Отзыв отправлен: " << feedback << endl;
    }
};

// Пример использования классов в программе
int main() {
    // Создание экземпляров классов
    CReserveInfo reserveInfo("Заповедник 'Тайга'");
    reserveInfo.AddRoute("Маршрут 1");
    reserveInfo.AddObject("Озеро");

    CUserProfile userProfile("Иван Иванов", "ivan@example.com");
    userProfile.AddBooking("Маршрут 1");

    CBookingManager bookingManager;
    bookingManager.Book("Маршрут 2");

    CMapNavigator mapNavigator;
    mapNavigator.ShowMap();
    mapNavigator.NavigateTo("Озеро");

    CNotificationService notificationService;
    notificationService.SendNotification("Завтра ожидается дождь.");

    CFeedbackManager feedbackManager;
    feedbackManager.SubmitFeedback("Отличный заповедник, но нужно больше указателей.");

    // Вывод информации о пользователе и заповеднике
    userProfile.GetUserInfo();
    reserveInfo.GetReserveInfo();

    return 0;
}
