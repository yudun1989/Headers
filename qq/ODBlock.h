//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ODBlock : NSObject
{
    CDUnknownBlockType _block;
    id _target;
    SEL _selector;
    id _userInfo;
}

+ (id)selector:(SEL)arg1 target:(id)arg2 userInfo:(id)arg3;
+ (id)selector:(SEL)arg1 target:(id)arg2;
+ (id)block:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)handleInnerResult:(id)arg1;
- (void)handleResult:(id)arg1;
- (void)dealloc;

@end

