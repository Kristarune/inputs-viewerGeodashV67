#pragma once
#include <Geode/Geode.hpp>

GEODE_NS_IV_BEGIN

enum class SettingEventType {
    Color,
    KeyAppearance,
    RefreshView,
};

// SDK 5.x: Event<Derived, bool(Args...), FilterArgs...>
// We use a single SettingEventType arg with no filter (GlobalEvent style)
class IVSettingEvent : public geode::Event<IVSettingEvent, bool(SettingEventType)> {
public:
    using Event::Event;
};

GEODE_NS_IV_END
