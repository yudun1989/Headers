//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@interface _QQFaceTabAction : NSObject <NSCopying>
{
    id _target;
    SEL _action;
}

+ (id)actionWithTarget:(id)arg1 withAction:(SEL)arg2;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void)performActionWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTarget:(id)arg1 withAction:(SEL)arg2;

@end

