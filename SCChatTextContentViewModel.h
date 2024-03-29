//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface SCChatTextContentViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowChatLabel;
    NSString *_rawText;
    NSAttributedString *_attributedText;
    double _chatLabelHeight;
    double _mediaCardsHeight;
    double _contentWidth;
    NSArray *_mediaCards;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, nonatomic) double chatLabelHeight; // @synthesize chatLabelHeight=_chatLabelHeight;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithRawText:(id)arg1 attributedText:(id)arg2 chatLabelHeight:(double)arg3 mediaCardsHeight:(double)arg4 contentWidth:(double)arg5 mediaCards:(id)arg6 shouldShowChatLabel:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *mediaCards; // @synthesize mediaCards=_mediaCards;
@property(readonly, nonatomic) double mediaCardsHeight; // @synthesize mediaCardsHeight=_mediaCardsHeight;
@property(readonly, copy, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
@property(readonly, nonatomic) _Bool shouldShowChatLabel; // @synthesize shouldShowChatLabel=_shouldShowChatLabel;

@end

