//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTVHandlerWrapper : NSObject
{
    id _handler;
    SEL _selector;
}

+ (id)wrapperWithHandler:(id)arg1;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

