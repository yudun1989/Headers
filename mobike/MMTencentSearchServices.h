//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMTencentSearchServices : NSObject
{
    NSString *_internalAPIKey;
}

+ (id)sharedServices;
@property(copy, nonatomic) NSString *internalAPIKey; // @synthesize internalAPIKey=_internalAPIKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *APIKey;
- (void)provideAPIKey:(id)arg1;

@end

