//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopContainerViewModel.h"

@class TBShopImageViewModel, TBShopLoftComponent;

@interface TBShopLoftViewModel : TBShopContainerViewModel
{
    TBShopLoftComponent *_component;
    TBShopImageViewModel *_launchImageViewModel;
    TBShopContainerViewModel *_container;
}

@property(retain, nonatomic) TBShopContainerViewModel *container; // @synthesize container=_container;
@property(retain, nonatomic) TBShopImageViewModel *launchImageViewModel; // @synthesize launchImageViewModel=_launchImageViewModel;
@property(retain, nonatomic) TBShopLoftComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)constrcutWithModel:(id)arg1;

@end

