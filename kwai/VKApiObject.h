//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VKObject.h"

#import "VKApiObject-Protocol.h"

@class NSDictionary, NSString;

@interface VKApiObject : VKObject <VKApiObject>
{
    NSDictionary *_fields;
}

+ (id)createWithArray:(id)arg1;
+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)serialize;
- (id)ignoredProperties;
- (void)enumPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)parse:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

