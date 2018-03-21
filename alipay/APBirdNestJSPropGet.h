//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APBirdNestViewController, DTDeviceInfo;
@protocol SAAccountService, SPSafePayService;

@interface APBirdNestJSPropGet : NSObject
{
    id <SPSafePayService> _safePayService;
    id <SAAccountService> _accountService;
    DTDeviceInfo *_deviceInfo;
    APBirdNestViewController *_viewController;
}

@property(nonatomic) __weak APBirdNestViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) DTDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) id <SAAccountService> accountService; // @synthesize accountService=_accountService;
@property(retain, nonatomic) id <SPSafePayService> safePayService; // @synthesize safePayService=_safePayService;
- (void).cxx_destruct;
- (id)platformPropGetWithParam:(id)arg1;
- (id)deviceInfoPropGetWithParam:(id)arg1;
- (id)accountInfoPropGetWithParam:(id)arg1;
- (id)offsetPropGetWithParam:(id)arg1;
- (id)userPreferencesPropGetWithParam:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

