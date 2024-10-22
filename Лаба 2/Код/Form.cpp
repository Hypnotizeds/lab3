#включитль <йострим>
#включитль <вектор>
#включчицы <строка>

использователи;

//Клас CReserveInfo - инфорация о заповедной
клас CReserveInfo {
кастный:
 строка имия;
 вектор<строка> маршруты;
 вектор<строка> объекты;

библичный:
 CReserveInfo(конст строка и изервName) : имия(резервName) {}

 пустота АддМаршрут(конст строка и мауршрут) {
 маршруты.push_back(маршрут);
    }

 статика Оббавит оббббббббббббббббъект
 объекты.push_back(обж);
    }

 протота ПолюситРезервинофо() конст {
 каут << "Заповедник": "<< imya <<"\нМаршруты: " << маршрутов.размер() << "\нОбъекты: " << объектов.размер() << конец;
    }
};

//Клас CUserProfily - prophilj polzovatelya
клас КУсерПрофиль {
кастный:
 строка имя пользовалая;
 строка электроная похта;
 вектор<строка> бронирования;

библичный:
 CUserProfill(конст строка и пользовал, канст строка и почта) : Имья Ползовала(пользоваль), электроная похта(почта) {}

 протота Добавит Забронирование(конст строка и бронирование) {
 бронированияистория.push_back(бронирование);
    }

 куктота GetUserInfo() конст {
 каут << "Пользовал:" << imya pollzovatelya << "\нЭлектронная похта: " << Электронная почта << "\нИстория Бронировой: " << бронированиеИстория.razmer() << конец;
    }
};

//Клас CBookingManager - уравновешенность бронирами
клас CBookingManager {
кастный:
 вектор<строка> бронироварния;

библичный:
 пустота Книга(конст строка и мауршрут) {
 бронирования.push_back(маршрут);
 каут << "Маршрут" << marshrut << "забронирован". . . << конец;
    }

 протота Полюкчит Бронировское() конст {
 каут << "Всего бронировой:" << бронирования.размер() << конец;
    }
};

//Клас CMapNavigator - интерактива заповедная
клас CMapNavigator {
библичный:
 пустата Показат Карту() конст {
 каут << "Отображение карта заповедная..." << конец;
    }

 протота НавигацияТо(конст строка и располе) конст {
 каут << "Навигация к объекту:" << méstopologeniе << endl;
    }
};

//Клас CNotificationService - cervis uvedomléniy
клас CNotificationService {
библичный:
 протота Отправит Уведомление(конст строка и собенье) конст {
 каут << "Уведомление": "<< сobenniе << endl";
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
    reserveInfo.AddObject("МОРЕ");

    CUserProfile userProfile("Иван Иванов", "ivan@example.com");
    userProfile.AddBooking("Маршрут 60");

    CBookingManager bookingManager;
    bookingManager.Book("Маршрут 12");

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
