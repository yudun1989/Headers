//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopBasicViewModel.h"

@class NSString, TBShopNavigationItemViewModel, TBShopNavigationThemeViewModel;

@interface TBShopNavigationViewModel : TBShopBasicViewModel
{
    _Bool _needHiddenForPullState;
    _Bool _active;
    TBShopNavigationItemViewModel *_centerItem;
    TBShopNavigationItemViewModel *_rightItem;
    TBShopNavigationThemeViewModel *_defaultTheme;
    TBShopNavigationThemeViewModel *_specialTheme;
    NSString *_searchWord;
    unsigned long long _state;
    TBShopNavigationThemeViewModel *_activeDefaultTheme;
    TBShopNavigationThemeViewModel *_activeSpecialTheme;
}

@property(retain, nonatomic) TBShopNavigationThemeViewModel *activeSpecialTheme; // @synthesize activeSpecialTheme=_activeSpecialTheme;
@property(retain, nonatomic) TBShopNavigationThemeViewModel *activeDefaultTheme; // @synthesize activeDefaultTheme=_activeDefaultTheme;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool needHiddenForPullState; // @synthesize needHiddenForPullState=_needHiddenForPullState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) TBShopNavigationThemeViewModel *specialTheme; // @synthesize specialTheme=_specialTheme;
@property(retain, nonatomic) TBShopNavigationThemeViewModel *defaultTheme; // @synthesize defaultTheme=_defaultTheme;
@property(retain, nonatomic) TBShopNavigationItemViewModel *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) TBShopNavigationItemViewModel *centerItem; // @synthesize centerItem=_centerItem;
- (void).cxx_destruct;
- (void)constrcutWithModel:(id)arg1;

@end

