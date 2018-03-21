//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DWPopLayerView.h"

#import "DWActorProtocol-Protocol.h"

@class DWWeexInstance, NSArray, NSDictionary, NSObject, NSString, UIView;

@interface DWCollectLogoView : DWPopLayerView <DWActorProtocol>
{
    double _timings[4];
    _Bool _initedUI;
    _Bool _showedFloatWeex;
    int _collectState;
    NSObject *director;
    CDUnknownBlockType _collectFailureBlock;
    NSArray *_logoItems;
    NSArray *_logoSlots;
    double _totalTime;
    DWWeexInstance *_weexInstance;
    UIView *_floatWeexView;
    NSDictionary *_floatWeexData;
    NSDictionary *_floatWeexUserData;
    long long _weexShowTime;
}

@property(nonatomic) long long weexShowTime; // @synthesize weexShowTime=_weexShowTime;
@property(nonatomic) _Bool showedFloatWeex; // @synthesize showedFloatWeex=_showedFloatWeex;
@property(retain, nonatomic) NSDictionary *floatWeexUserData; // @synthesize floatWeexUserData=_floatWeexUserData;
@property(retain, nonatomic) NSDictionary *floatWeexData; // @synthesize floatWeexData=_floatWeexData;
@property(retain, nonatomic) UIView *floatWeexView; // @synthesize floatWeexView=_floatWeexView;
@property(retain, nonatomic) DWWeexInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(nonatomic) _Bool initedUI; // @synthesize initedUI=_initedUI;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSArray *logoSlots; // @synthesize logoSlots=_logoSlots;
@property(retain, nonatomic) NSArray *logoItems; // @synthesize logoItems=_logoItems;
@property(nonatomic) int collectState; // @synthesize collectState=_collectState;
@property(copy, nonatomic) CDUnknownBlockType collectFailureBlock; // @synthesize collectFailureBlock=_collectFailureBlock;
@property(nonatomic) __weak NSObject *director; // @synthesize director;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)logoItemClicked:(id)arg1;
- (void)setFloatWeexURL:(id)arg1;
- (void)showFloatWeex;
- (void)removeLogoItemsAndSlots;
- (void)collectFailure;
- (void)collectSuccess;
- (_Bool)checkCollectSuccess;
- (struct CGPoint)randomPointInRect:(struct CGRect)arg1;
- (void)initLogoSlots;
- (void)updateSlotFrame;
- (void)initLogoItems;
- (void)updateLogoFrame;
- (void)initUI;
- (void)onTick:(double)arg1;
- (void)setWeexUserData:(id)arg1;
- (void)setJsonData:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

