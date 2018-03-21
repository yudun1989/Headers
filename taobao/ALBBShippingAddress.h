//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ALBBShippingAddress : NSObject
{
    _Bool isLeaf;
    NSString *_country;
    NSString *_forgin;
    NSString *_deliverId;
    NSString *_linkAddressId;
    NSString *_fullName;
    NSString *_mobile;
    NSString *_post;
    NSString *_divisionCode;
    NSString *_countryDivisionCode;
    NSString *_provDivisionCode;
    NSString *_cityDivisionCode;
    NSString *_areaDivisionCode;
    NSString *_province;
    NSString *_city;
    NSString *_area;
    NSString *_addressDetail;
    NSString *_defaultAddress;
    NSString *_addressType;
    NSString *_townDivisionCode;
    NSString *_town;
    NSString *_kinshipDeliverAddress;
    NSArray *_kinshipUserIdList;
    NSArray *_kinshipRelationTypeList;
    NSArray *_kinshipRelationTypeDescList;
}

+ (id)dicForAddressModel:(id)arg1;
+ (id)addressModelForDic:(id)arg1;
@property(copy, nonatomic) NSArray *kinshipRelationTypeDescList; // @synthesize kinshipRelationTypeDescList=_kinshipRelationTypeDescList;
@property(copy, nonatomic) NSArray *kinshipRelationTypeList; // @synthesize kinshipRelationTypeList=_kinshipRelationTypeList;
@property(copy, nonatomic) NSArray *kinshipUserIdList; // @synthesize kinshipUserIdList=_kinshipUserIdList;
@property(copy, nonatomic) NSString *kinshipDeliverAddress; // @synthesize kinshipDeliverAddress=_kinshipDeliverAddress;
@property(copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(copy, nonatomic) NSString *townDivisionCode; // @synthesize townDivisionCode=_townDivisionCode;
@property(copy, nonatomic) NSString *addressType; // @synthesize addressType=_addressType;
@property(copy, nonatomic) NSString *defaultAddress; // @synthesize defaultAddress=_defaultAddress;
@property(copy, nonatomic) NSString *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *areaDivisionCode; // @synthesize areaDivisionCode=_areaDivisionCode;
@property(copy, nonatomic) NSString *cityDivisionCode; // @synthesize cityDivisionCode=_cityDivisionCode;
@property(copy, nonatomic) NSString *provDivisionCode; // @synthesize provDivisionCode=_provDivisionCode;
@property(copy, nonatomic) NSString *countryDivisionCode; // @synthesize countryDivisionCode=_countryDivisionCode;
@property(copy, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
@property(copy, nonatomic) NSString *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *linkAddressId; // @synthesize linkAddressId=_linkAddressId;
@property(copy, nonatomic) NSString *deliverId; // @synthesize deliverId=_deliverId;
@property(copy, nonatomic) NSString *forgin; // @synthesize forgin=_forgin;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (void)setAsDefaultAddress:(_Bool)arg1;
- (_Bool)isDefault;
- (id)fullAddress;
- (id)initWithDictionary:(id)arg1;

@end

