//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTAttributedLabel.h"

#import "SCActionMenuCustomButtonsCell-Protocol.h"
#import "SCActionMenuRenderableCellContentView-Protocol.h"

@class NSString;

@interface SCChatTextLabel : TTTAttributedLabel <SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell>
{
    NSString *_rawText;
}

+ (id)selectedLinkColor;
- (void).cxx_destruct;
- (void)_colorMentionUrlsBlue;
- (id)extraActionMenuButtons;
- (id)init;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
- (void)setViewModel:(id)arg1;

@end

