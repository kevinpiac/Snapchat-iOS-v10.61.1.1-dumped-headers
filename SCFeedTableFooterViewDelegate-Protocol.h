//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCFeedTableFooterViewDelegate <NSObject>
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool phoneVerificationHeaderPromptExists;
- (_Bool)shouldShowLoadingView;
- (void)showMyContactsVC:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2 transitionStartingFrame:(struct CGRect)arg3;
- (void)tableFooterDidChange;
@end

