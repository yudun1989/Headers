//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTToString.h"

@class DTDouble, NSString;

@interface KBCONTENTBaseRpcReq : KBCONTENTToString
{
    DTDouble *_longitude;
    DTDouble *_latitude;
    NSString *_cityCode;
    NSString *_systemType;
    NSString *_templateType;
    NSString *_templateParams;
    NSString *_businessAreaId;
}

@property(retain, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) DTDouble *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) DTDouble *longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (void)o2olc_assignCommonParams;

@end

