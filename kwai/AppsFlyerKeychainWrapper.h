//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppsFlyerKeychainWrapper : NSObject
{
    NSString *identifier;
    NSString *appId;
}

- (void).cxx_destruct;
- (_Bool)update:(id)arg1:(id)arg2;
- (_Bool)remove:(id)arg1;
- (id)prepareForKeychain:(id)arg1;
- (id)getObject:(id)arg1;
- (_Bool)setObject:(id)arg1 withData:(id)arg2;
- (id)initWithIdentifier:(id)arg1 withAppId:(id)arg2;

@end

