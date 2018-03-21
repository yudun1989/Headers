//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

#import "AliDetailContractPhoneViewProtocal-Protocol.h"

@class AliDetailContractPhoneCityView, AliDetailContractPhoneDataEngine, AliDetailContractPhoneNavigationBar, NSString;

@interface AliDetailNumberCardCitySubView : AliDetailBaseContainerView <AliDetailContractPhoneViewProtocal>
{
    AliDetailContractPhoneDataEngine *_dataEngine;
    CDUnknownBlockType _selectBlock;
    AliDetailContractPhoneCityView *_cityView;
    AliDetailContractPhoneNavigationBar *_navigationBar;
}

@property(retain, nonatomic) AliDetailContractPhoneNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) AliDetailContractPhoneCityView *cityView; // @synthesize cityView=_cityView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) __weak AliDetailContractPhoneDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (void)handleCityEvent:(id)arg1;
- (void)clearData;
- (void)prepareData;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

