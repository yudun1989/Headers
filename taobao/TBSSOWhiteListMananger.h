//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TBSSOWhiteListMananger : NSObject
{
    NSDictionary *_whiteListDict;
}

+ (id)schemaforSourceAppliaction:(id)arg1;
+ (void)cancelForSourceApplicaiton:(id)arg1;
+ (void)ssoToSourceApplication:(id)arg1;
+ (id)sharedInstantce;
@property(retain, nonatomic) NSDictionary *whiteListDict; // @synthesize whiteListDict=_whiteListDict;
- (void).cxx_destruct;

@end

