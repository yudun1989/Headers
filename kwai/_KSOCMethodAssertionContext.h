//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_KSAssertionContext.h"

@interface _KSOCMethodAssertionContext : _KSAssertionContext
{
    SEL _selector;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFileName:(id)arg1 fileLine:(long long)arg2 message:(id)arg3 selector:(SEL)arg4 object:(id)arg5;

@end

