//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTSecurityUtil : NSObject
{
    struct map<std::__1::basic_string<char>, void *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void *>>> handlerMap;
}

+ (void)checkTfccStabilityIfNeed;
+ (id)sharedInstance;
+ (void)load;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)decrypt:(id)arg1 token:(id)arg2;
- (id)encrypt:(id)arg1 token:(id)arg2;
- (id)init;
- (void)dealloc;

@end

