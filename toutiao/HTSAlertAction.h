//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HTSAlertAction : NSObject
{
    NSString *_title;
    _Bool _enabled;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)fire;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

