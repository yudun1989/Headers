//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface REARUnpackRequest : NSObject
{
    NSString *_redEnvelopeId;
    NSString *_sign;
    NSString *_picId;
    NSString *_prevBiz;
    NSString *_arType;
    NSString *_locationName;
    NSString *_sealedData;
    NSString *_securityId;
    struct CLLocationCoordinate2D _location;
}

@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *sealedData; // @synthesize sealedData=_sealedData;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) NSString *arType; // @synthesize arType=_arType;
@property(retain, nonatomic) NSString *prevBiz; // @synthesize prevBiz=_prevBiz;
@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *redEnvelopeId; // @synthesize redEnvelopeId=_redEnvelopeId;
- (void).cxx_destruct;

@end

