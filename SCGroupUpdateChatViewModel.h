//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

#import "SCGroupUpdateChatViewModel-Protocol.h"

@class SCChatGroupUpdateContent;
@protocol SCChatGroup;

@interface SCGroupUpdateChatViewModel : SCMessageChatViewModel <SCGroupUpdateChatViewModel>
{
    id <SCChatGroup> _group;
    SCChatGroupUpdateContent *_content;
}

- (void).cxx_destruct;
- (id)attributedTextForLabel;
- (double)bodyContentWidth;
@property(readonly, copy, nonatomic) SCChatGroupUpdateContent *content; // @synthesize content=_content;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)needsExtraSpacingOnTop;
- (double)payloadHeight;
- (double)payloadVerticalMargin;
- (id)reusableCellIdentifier;

@end

