//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMapSpeechBubbleImageUtil : NSObject
{
}

+ (id)_bubblePathWithRect:(struct CGRect)arg1 cornerRadius:(double)arg2 tailBaseCenterX:(double)arg3 tailBaseWidth:(double)arg4 tailPoint:(struct CGPoint)arg5;
+ (id)_collapsedBubblePathWithRect:(struct CGRect)arg1;
+ (id)_collapsedImageHighlighted:(_Bool)arg1;
+ (id)_expandedBubblePathWithRect:(struct CGRect)arg1 tailOffset:(struct CGPoint)arg2;
+ (id)_expandedImageForText:(id)arg1 highlighted:(_Bool)arg2 tailOffset:(struct CGPoint)arg3;
+ (struct CGSize)_expandedSizeForText:(id)arg1 tailOffset:(struct CGPoint)arg2;
+ (id)imageForText:(id)arg1 expanded:(_Bool)arg2 highlighted:(_Bool)arg3 tailOffset:(struct CGPoint)arg4;
+ (struct CGSize)sizeForText:(id)arg1 expanded:(_Bool)arg2 tailOffset:(struct CGPoint)arg3;

@end

