//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCChatMessageViewModel-Protocol.h"
#import "SCGroupUpdateChatViewModel-Protocol.h"
#import "SCMessageChatCellViewConfig-Protocol.h"
#import "SCSavableItemChatCellViewConfig-Protocol.h"
#import "SCSavableTextChatCellViewConfig-Protocol.h"

@class NSDate, NSString, SCChatActionModelContainer, SCChatDateHeaderViewModel, SCChatMessageContent, SCChatSavableViewModel, SCChatSenderHeaderViewModel, SCChatSenderLineViewModel, SCChatTimestampViewModel;
@protocol NSObject;

@interface SCChatMessageCellViewModel : NSObject <SCChatMessageViewModel, SCMessageChatCellViewConfig, SCSavableTextChatCellViewConfig, SCSavableItemChatCellViewConfig, SCGroupUpdateChatViewModel, IGListDiffable, NSCopying>
{
    _Bool _shouldDisplayBelowFoldInChat;
    _Bool _isUnseenMessageInChat;
    _Bool _isAvailableForNewChatsAffordance;
    _Bool _isMessageSentBySelf;
    SCChatSavableViewModel *_savableViewModel;
    SCChatSenderHeaderViewModel *_senderHeader;
    SCChatSenderLineViewModel *_senderLine;
    double _cellHeight;
    double _bodyWidth;
    double _payloadWidth;
    double _payloadContentWidth;
    NSString *_reusableCellIdentifier;
    SCChatDateHeaderViewModel *_dateHeaderViewModel;
    SCChatMessageContent *_messageContent;
    SCChatTimestampViewModel *_timestampViewModel;
    NSDate *_timestamp;
    id <NSObject> _identifier;
    SCChatActionModelContainer *_actionModels;
    struct UIEdgeInsets _bodyInsets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCChatActionModelContainer *actionModels; // @synthesize actionModels=_actionModels;
- (id)attributedText;
- (id)attributedTextForLabel;
- (double)bodyContentWidth;
@property(readonly, nonatomic) struct UIEdgeInsets bodyInsets; // @synthesize bodyInsets=_bodyInsets;
- (double)bodyTopMargin;
@property(readonly, nonatomic) double bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
- (double)calculateHeight;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) double chatLabelHeight;
- (id)colorForBackground;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double dateHeaderHeight;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, copy, nonatomic) SCChatDateHeaderViewModel *dateHeaderViewModel; // @synthesize dateHeaderViewModel=_dateHeaderViewModel;
- (id)diffIdentifier;
- (id)expirationDate;
- (id)fontForChatLabel;
@property(readonly) unsigned long long hash;
- (double)headerHeight;
@property(readonly, nonatomic) double headerHorizontalMargin;
@property(nonatomic) int headerIndex;
- (id)headerLabelFont;
- (double)headerLabelHeight;
@property(nonatomic) double height;
@property(readonly, nonatomic) id <NSObject> identifier; // @synthesize identifier=_identifier;
- (id)initWithSavableViewModel:(id)arg1 senderHeader:(id)arg2 senderLine:(id)arg3 cellHeight:(double)arg4 bodyWidth:(double)arg5 payloadWidth:(double)arg6 payloadContentWidth:(double)arg7 bodyInsets:(struct UIEdgeInsets)arg8 reusableCellIdentifier:(id)arg9 shouldDisplayBelowFoldInChat:(_Bool)arg10 isUnseenMessageInChat:(_Bool)arg11 isAvailableForNewChatsAffordance:(_Bool)arg12 isMessageSentBySelf:(_Bool)arg13 dateHeaderViewModel:(id)arg14 messageContent:(id)arg15 timestampViewModel:(id)arg16 timestamp:(id)arg17 identifier:(id)arg18 actionModels:(id)arg19;
- (double)intervalFromPrevious;
@property(readonly, nonatomic) _Bool isAvailableForNewChatsAffordance; // @synthesize isAvailableForNewChatsAffordance=_isAvailableForNewChatsAffordance;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(nonatomic) _Bool isFirstViewModel;
- (_Bool)isGrayScaleMediaCard;
@property(nonatomic) _Bool isLastViewModel;
@property(readonly, nonatomic) _Bool isMessageSentBySelf; // @synthesize isMessageSentBySelf=_isMessageSentBySelf;
- (_Bool)isSentByUser;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat; // @synthesize isUnseenMessageInChat=_isUnseenMessageInChat;
- (id)mediaCardViewModels;
@property(readonly, copy, nonatomic) SCChatMessageContent *messageContent; // @synthesize messageContent=_messageContent;
- (_Bool)messageHasReplyMedias;
- (unsigned long long)messageRetentionInMinutes;
- (_Bool)needsExtraSpacingOnTop;
@property(readonly, nonatomic) double payloadContentWidth; // @synthesize payloadContentWidth=_payloadContentWidth;
- (double)payloadHeight;
- (double)payloadHorizontalMargin;
- (double)payloadVerticalMargin;
@property(readonly, nonatomic) double payloadWidth; // @synthesize payloadWidth=_payloadWidth;
- (id)productToDisplayLinkAttribute;
@property(readonly, copy, nonatomic) NSString *rawText;
- (void)refreshViewModel;
@property(readonly, copy, nonatomic) NSString *reusableCellIdentifier; // @synthesize reusableCellIdentifier=_reusableCellIdentifier;
@property(readonly, copy, nonatomic) SCChatSavableViewModel *savableViewModel; // @synthesize savableViewModel=_savableViewModel;
- (id)sectionColor;
@property(readonly, copy, nonatomic) SCChatSenderHeaderViewModel *senderHeader; // @synthesize senderHeader=_senderHeader;
@property(readonly, copy, nonatomic) SCChatSenderLineViewModel *senderLine; // @synthesize senderLine=_senderLine;
@property(nonatomic) _Bool topRightCornerIsRounded;
- (_Bool)shouldActOnLinkGesture;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat; // @synthesize shouldDisplayBelowFoldInChat=_shouldDisplayBelowFoldInChat;
- (_Bool)shouldDisplayBelowFoldInChatForPreviewMode;
- (_Bool)shouldShowChatLabel;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
- (_Bool)shouldShowRetryIcon;
- (_Bool)shouldShowRetryStatusView;
- (_Bool)shouldShowSaveOrUnsaveAnimation;
- (_Bool)shouldShowSavedLabel;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
- (_Bool)shouldShowStatusMessageHeaderLabel;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
- (_Bool)shouldShowURLMediaCards;
- (unsigned long long)textCheckingTypes;
- (id)textForActionHeaderTimeLabel;
- (id)textForDateHeaderLabel;
- (id)textForHeaderStatusView;
- (id)textForSenderHeaderLabel;
- (id)textForStatusMessageHeaderLabel;
- (id)textForTimeLabel;
- (id)textLabelFont;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) SCChatTimestampViewModel *timestampViewModel; // @synthesize timestampViewModel=_timestampViewModel;
@property(readonly, nonatomic) double topMargin;
- (double)verticalOffsetForBodyView;
- (double)verticalOffsetForSenderHeaderLabel;
- (double)widthForSenderLine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
