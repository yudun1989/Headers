//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData, NSString;

@interface WloginTlv_0x128 : WloginTlv
{
    unsigned short wVer;
    unsigned char cNewInstall;
    unsigned char cReadGuid;
    unsigned char cGuidChg;
    unsigned char cGUIDSrc;
    unsigned char cReadFailFlag;
    unsigned char cDevChgFlag;
    unsigned char cResvFlag;
    NSString *deviceType;
    NSData *guid;
}

@property unsigned char cNewInstall; // @synthesize cNewInstall;
@property(copy) NSString *deviceType; // @synthesize deviceType;
@property unsigned char cReadGuid; // @synthesize cReadGuid;
@property unsigned char cGuidChg; // @synthesize cGuidChg;
@property unsigned char cResvFlag; // @synthesize cResvFlag;
@property unsigned char cDevChgFlag; // @synthesize cDevChgFlag;
@property unsigned char cReadFailFlag; // @synthesize cReadFailFlag;
@property unsigned char cGUIDSrc; // @synthesize cGUIDSrc;
@property(retain) NSData *guid; // @synthesize guid;
@property unsigned short wVer; // @synthesize wVer;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

