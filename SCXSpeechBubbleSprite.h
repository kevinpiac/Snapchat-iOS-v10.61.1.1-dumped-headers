//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCXSprite.h"

@class NSString;

@interface SCXSpeechBubbleSprite : SCXSprite
{
    _Bool _highlighted;
    _Bool _expanded;
    NSString *_text;
    NSString *_userId;
    struct CGPoint _tailOffset;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGPoint tailOffset; // @synthesize tailOffset=_tailOffset;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (struct CGRect)touchRectInMapViewport:(id)arg1 view:(id)arg2;

@end

