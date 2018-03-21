//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TBLiveThemeModel;
@protocol TBLiveThemeManagerProtocol;

@interface TBLiveThemeManager : NSObject
{
    TBLiveThemeModel *_themeModel;
    NSMutableArray<TBLiveThemeManagerProtocol> *_elements;
}

@property(retain, nonatomic) NSMutableArray<TBLiveThemeManagerProtocol> *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) TBLiveThemeModel *themeModel; // @synthesize themeModel=_themeModel;
- (void).cxx_destruct;
- (void)refreshLiveRoomUI;
- (void)unregisteThemeNotificationForView:(id)arg1;
- (void)registeThemeNotificationForView:(id)arg1;
- (void)updateTheme:(id)arg1;
- (void)resetTheme;
- (void)requestThemeModelWithTopic:(id)arg1 anchroId:(id)arg2;
- (void)delayRequestThemeModelWithTopic:(id)arg1 anchroId:(id)arg2;
- (void)applyThemeWithAction:(id)arg1 model:(id)arg2 topic:(id)arg3 anchorId:(id)arg4;
- (void)applyThemeWithAction:(id)arg1 topic:(id)arg2 anchorId:(id)arg3;
- (void)dealloc;

@end

