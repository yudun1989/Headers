//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol MCOfficialBubbleProtocol, MCOfficialCellDelegate, MCOfficialMessageVOProtocol;

@protocol MCOfficialCellProtocol <NSObject>
+ (NSString *)identifier;
+ (double)heightWithMessageVO:(id <MCOfficialMessageVOProtocol>)arg1;
@property(retain, nonatomic) id <MCOfficialMessageVOProtocol> messageVO;
@property(nonatomic) __weak id <MCOfficialCellDelegate> cellDelegate;
- (UIView<MCOfficialBubbleProtocol> *)currentBubble;
- (void)replaceBubble:(UIView<MCOfficialBubbleProtocol> *)arg1 withMessageVO:(id <MCOfficialMessageVOProtocol>)arg2;
- (void)updateMessageVO:(id <MCOfficialMessageVOProtocol>)arg1;
@end

