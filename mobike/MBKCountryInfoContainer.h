//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MBKCountryInfoContainer : NSObject
{
    NSDictionary *_countryCodeContainer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *countryCodeContainer; // @synthesize countryCodeContainer=_countryCodeContainer;
- (void).cxx_destruct;
- (id)allIsoCountryCodeArray;
- (id)allSupportedCountryCodesArray;
- (id)allAreaCodesArray;
- (id)allCountryCodesArray;

@end

