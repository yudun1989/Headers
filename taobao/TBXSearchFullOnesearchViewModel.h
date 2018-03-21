//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewModel.h"

@class NSString, TBSearchOnesearchNXConfigManager, TBXSearchService;
@protocol TBXSearchFullOnesearchViewModelUIComponentDelegate;

@interface TBXSearchFullOnesearchViewModel : TBSearchViewModel
{
    _Bool _isCache;
    _Bool _isFailed;
    TBXSearchService *_itemSearchService;
    NSString *_onesearchUrl;
    NSString *_nxTemplate;
    TBSearchOnesearchNXConfigManager *_onesearchNXConfigManager;
}

@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) TBSearchOnesearchNXConfigManager *onesearchNXConfigManager; // @synthesize onesearchNXConfigManager=_onesearchNXConfigManager;
@property(retain, nonatomic) NSString *nxTemplate; // @synthesize nxTemplate=_nxTemplate;
@property(retain, nonatomic) NSString *onesearchUrl; // @synthesize onesearchUrl=_onesearchUrl;
@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
- (void).cxx_destruct;
- (_Bool)enableNX;
- (void)loadDataFailed:(id)arg1;
- (void)dataLoaded;
- (void)startLoading;

// Remaining properties
@property(nonatomic) __weak id <TBXSearchFullOnesearchViewModelUIComponentDelegate> uiComponent; // @dynamic uiComponent;

@end

