//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIPercentDrivenInteractiveTransition;

@interface TSVTransitionAnimationManager : NSObject
{
    UIPercentDrivenInteractiveTransition *_enterProfilePercentDrivenTransition;
    struct CGRect _listSelectedCellFrame;
    struct CGRect _profileListSelectedCellFrame;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *enterProfilePercentDrivenTransition; // @synthesize enterProfilePercentDrivenTransition=_enterProfilePercentDrivenTransition;
@property(nonatomic) struct CGRect profileListSelectedCellFrame; // @synthesize profileListSelectedCellFrame=_profileListSelectedCellFrame;
@property(nonatomic) struct CGRect listSelectedCellFrame; // @synthesize listSelectedCellFrame=_listSelectedCellFrame;
- (void).cxx_destruct;

@end

