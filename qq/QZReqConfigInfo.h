//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QZModelObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface QZReqConfigInfo : QZModelObject
{
    NSString *_uiWaitTimeRdmEventCode;
}

@property(retain, nonatomic) NSString *uiWaitTimeRdmEventCode; // @synthesize uiWaitTimeRdmEventCode=_uiWaitTimeRdmEventCode;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool allowResumeForFileDownloads; // @dynamic allowResumeForFileDownloads;
@property(nonatomic) unsigned long long cntType; // @dynamic cntType;
@property(nonatomic) long long currentApnType; // @dynamic currentApnType;
@property(nonatomic) long long currentCarrierType; // @dynamic currentCarrierType;
@property(retain, nonatomic) NSString *dataSaveDstPath; // @dynamic dataSaveDstPath;
@property(retain, nonatomic) NSString *dataSaveTmpPath; // @dynamic dataSaveTmpPath;
@property(nonatomic) double decodeDataUseTime; // @dynamic decodeDataUseTime;
@property(retain, nonatomic) NSArray *flowTypeArray; // @dynamic flowTypeArray;
@property(nonatomic) double getIpListUseTime; // @dynamic getIpListUseTime;
@property(nonatomic) unsigned long long imgType; // @dynamic imgType;
@property(retain, nonatomic) NSArray *ipListArray; // @dynamic ipListArray;
@property(nonatomic) long long ipType; // @dynamic ipType;
@property(nonatomic) _Bool isPredownload; // @dynamic isPredownload;
@property(nonatomic) _Bool isUseARK; // @dynamic isUseARK;
@property(nonatomic) _Bool isUseH2; // @dynamic isUseH2;
@property(nonatomic) _Bool isUseHttps; // @dynamic isUseHttps;
@property(nonatomic) _Bool isValidatesDomainName; // @dynamic isValidatesDomainName;
@property(retain, nonatomic) NSString *rdmEventCode; // @dynamic rdmEventCode;
@property(retain, nonatomic) NSURL *reqURL; // @dynamic reqURL;
@property(nonatomic) int resType; // @dynamic resType;
@property(nonatomic) long long totalBytesRead; // @dynamic totalBytesRead;
@property(retain, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

@end

