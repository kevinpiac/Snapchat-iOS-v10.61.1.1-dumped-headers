//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SCActionModel, SCAvatarContainerViewModel, SCCornerRadii, SCFriendsFeedComponentViewRightButtonViewModel, SCFriendsFeedFriendmojiViewModel, SCFriendsFeedIcon, UIFont;

@protocol SCFeedComponentViewModel <NSObject>
- (SCActionModel *)animationModel;
- (NSAttributedString *)attributedSublabelText;
- (SCCornerRadii *)cornerRadii;
- (NSAttributedString *)displayNameAttributedStringWithWidth:(double)arg1;
- (SCFriendsFeedIcon *)feedIcon;
- (SCFriendsFeedFriendmojiViewModel *)friendmojiViewModel;
- (SCAvatarContainerViewModel *)friendsFeedAvatarViewModel;
- (NSString *)identifier;
- (_Bool)isPinned;
- (SCFriendsFeedComponentViewRightButtonViewModel *)rightButtonViewModel;
- (UIFont *)separatorFont;
- (_Bool)showOfficialBadge;
- (SCFriendsFeedFriendmojiViewModel *)sublabelFriendmojiViewModel;
- (NSString *)substringToTruncateInSubLabel;
- (unsigned long long)typingAnimationState;
@end
