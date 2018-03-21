//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface NBPhoneNumber : NSObject <NSCopying, NSCoding>
{
    _Bool _italianLeadingZero;
    NSNumber *_countryCode;
    NSNumber *_nationalNumber;
    NSString *_extension;
    NSNumber *_numberOfLeadingZeros;
    NSString *_rawInput;
    NSNumber *_countryCodeSource;
    NSString *_preferredDomesticCarrierCode;
}

@property(retain, nonatomic) NSString *preferredDomesticCarrierCode; // @synthesize preferredDomesticCarrierCode=_preferredDomesticCarrierCode;
@property(retain, nonatomic) NSNumber *countryCodeSource; // @synthesize countryCodeSource=_countryCodeSource;
@property(retain, nonatomic) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(retain, nonatomic) NSNumber *numberOfLeadingZeros; // @synthesize numberOfLeadingZeros=_numberOfLeadingZeros;
@property(nonatomic) _Bool italianLeadingZero; // @synthesize italianLeadingZero=_italianLeadingZero;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *nationalNumber; // @synthesize nationalNumber=_nationalNumber;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToObject:(id)arg1;
- (long long)getCountryCodeSourceOrDefault;
- (void)clearCountryCodeSource;
- (id)init;

@end

