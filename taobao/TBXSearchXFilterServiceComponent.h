//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchXFilterBaseComponent.h"

@class NSMutableArray, TBXSearchXFilterServiceModel;

@interface TBXSearchXFilterServiceComponent : TBXSearchXFilterBaseComponent
{
    TBXSearchXFilterServiceModel *_model;
    NSMutableArray *_serviceButtonArray;
}

@property(retain, nonatomic) NSMutableArray *serviceButtonArray; // @synthesize serviceButtonArray=_serviceButtonArray;
@property(retain, nonatomic) TBXSearchXFilterServiceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)firstAccessibilityElement;
- (id)accessibilityLabel;
- (id)getDisplayUTArgs;
- (_Bool)ishighlight;
- (void)reset;
- (void)buttonClickMulti:(id)arg1;
- (void)buttonClickSig:(id)arg1;
- (void)addBtnEvent;
- (void)renderButton;
- (void)renderUI;
- (void)componentInitWithService:(id)arg1 model:(id)arg2;

@end

