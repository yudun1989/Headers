//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HTSLoadFailedView : UIView
{
    CDUnknownBlockType _retryBlock;
    CDUnknownBlockType _resolveBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resolveBlock; // @synthesize resolveBlock=_resolveBlock;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
- (void).cxx_destruct;
- (void)resolveButtonAction;
- (void)singleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tapAction:(CDUnknownBlockType)arg2 resolveAction:(CDUnknownBlockType)arg3;

@end

