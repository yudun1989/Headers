//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKChangePhoneNumberRequest : MBKMobikeRequest
{
    NSString *_oldmobile;
    NSString *_newmobile;
    NSString *_capt;
    NSString *_idcode;
}

@property(copy, nonatomic) NSString *idcode; // @synthesize idcode=_idcode;
@property(copy, nonatomic) NSString *capt; // @synthesize capt=_capt;
@property(copy, nonatomic) NSString *newmobile; // @synthesize newmobile=_newmobile;
@property(copy, nonatomic) NSString *oldmobile; // @synthesize oldmobile=_oldmobile;
- (void).cxx_destruct;
- (id)init;

@end

