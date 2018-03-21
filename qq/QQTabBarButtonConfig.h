//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseSkinConfig.h>

@interface QQTabBarButtonConfig : QQBaseSkinConfig
{
    struct CGPoint _tabBarIconCenter;
    struct CGPoint _tabBarTitleCenter;
    struct CGPoint _unreadIconCenter;
    struct CGPoint _unreadIconCenterHighlighted;
    _Bool showsTitle;
    struct CGPoint unreadIconCenter;
}

+ (void)setTabBarItemThemeCount:(int)arg1;
+ (void)initialize;
+ (id)tabBarButtonConfigWithTabBarIndex:(unsigned long long)arg1;
+ (id)getInstanceByIndex:(unsigned long long)arg1;
@property(nonatomic) struct CGPoint unreadIconCenter; // @synthesize unreadIconCenter;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle;
- (float)unreadIconCenterY;
- (struct CGPoint)adaptedTabBarTitleCenter;
- (struct CGPoint)adaptedTabBarIconCenter;
- (void)setViewAppearance:(id)arg1;
- (void)setConfigValues:(id)arg1;

@end

