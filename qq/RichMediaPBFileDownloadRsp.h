//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface RichMediaPBFileDownloadRsp : NSObject
{
    int _result;
    NSString *_thumbDownPara;
    NSData *_msgKey;
    NSMutableArray *_ipAndPort;
    NSData *_resId;
    int _channelType;
}

@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSData *resId; // @synthesize resId=_resId;
@property(retain, nonatomic) NSMutableArray *ipAndPort; // @synthesize ipAndPort=_ipAndPort;
@property(retain, nonatomic) NSData *msgKey; // @synthesize msgKey=_msgKey;
@property(retain, nonatomic) NSString *thumbDownPara; // @synthesize thumbDownPara=_thumbDownPara;
@property(nonatomic) int result; // @synthesize result=_result;
- (void)dealloc;

@end

