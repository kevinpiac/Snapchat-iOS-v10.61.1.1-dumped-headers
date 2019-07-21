//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSavableItemChatCellViewConfig-Protocol.h"

@class NSArray, NSAttributedString, NSString, SOJUChatMessageBodyAttribute, UIFont;

@protocol SCSavableTextChatCellViewConfig <SCSavableItemChatCellViewConfig>
- (NSAttributedString *)attributedText;
@property(readonly, nonatomic) double chatLabelHeight;
- (UIFont *)fontForChatLabel;
- (NSArray *)mediaCardViewModels;
- (SOJUChatMessageBodyAttribute *)productToDisplayLinkAttribute;
@property(readonly, copy, nonatomic) NSString *rawText;
- (_Bool)shouldActOnLinkGesture;
@end

