//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEJSBridge.h"

@class AWEOriginalAdModel;

@interface AWEAdJSBridge : AWEJSBridge
{
    AWEOriginalAdModel *_adModel;
}

@property(retain, nonatomic) AWEOriginalAdModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (_Bool)callPhoneNum:(id)arg1;
- (_Bool)showGallery:(id)arg1;
- (void)_registerPhoneCall;
- (void)_registerGallery;
- (void)_registerAdInfo;

@end

