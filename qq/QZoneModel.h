//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QZModelObject.h>

@interface QzoneModel : QZModelObject
{
}

+ (id)handlePropertyType:(id)arg1;
+ (id)dictionaryWithJSONString:(id)arg1;
+ (id)generateModelWithJSONString:(id)arg1 withError:(id *)arg2;
- (id)itemKeyFromDictionay:(id)arg1 withKey:(id)arg2;
- (id)decodeToFeedFromArray:(id)arg1 withKey:(id)arg2;
- (id)decodeToFeedFromDictionary:(id)arg1 withKey:(id)arg2;
- (id)decodeToFeedModelWithObject:(id)arg1 withKey:(id)arg2 withClass:(Class)arg3 withPropertyInfo:(id)arg4 withValue:(id)arg5;
- (id)generateModelWithDictionary:(id)arg1;

@end

