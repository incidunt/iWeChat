//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, WCPayGPMemberFillMoneyCell;

@protocol WCPayGPMemberFillMoneyCellDelegate <NSObject>
- (void)cellTextFieldKeyboardPressNextBtn:(CContact *)arg1;
- (void)cellTextFieldKeyboardPressPreviousBtn:(CContact *)arg1;
- (void)cellTextFieldDidEndEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2 withValue:(double)arg3;
- (void)cellTextFieldDidChangeWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2 withValue:(double)arg3;
- (void)cellTextFieldWillBeginEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2;
- (_Bool)cellTextFieldShouldBeginEdittingWithCell:(WCPayGPMemberFillMoneyCell *)arg1 withContact:(CContact *)arg2;
@end

