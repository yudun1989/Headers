//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface QQPhoneBindingModel : NSObject <NSCoding, NSCopying>
{
    NSString *_countryCode;
    NSString *_bindingPhone;
    unsigned int _bindingTime;
    _Bool _needUnify;
    NSData *_vasResult;
    NSDictionary *_phoneInfoData;
    int _xo;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bindingPhone; // @dynamic bindingPhone;
@property(nonatomic) unsigned int bindingTime; // @dynamic bindingTime;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool needUnify; // @dynamic needUnify;
@property(copy, nonatomic) NSDictionary *phoneInfoData; // @dynamic phoneInfoData;
@property(copy, nonatomic) NSData *vasResult; // @dynamic vasResult;

@end

