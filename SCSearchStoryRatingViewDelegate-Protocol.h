//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCSearchStoryRatingView, UIImageView;

@protocol SCSearchStoryRatingViewDelegate <NSObject>
- (void)searchStoryRatingView:(SCSearchStoryRatingView *)arg1 didSubmitWithRatingInfo:(NSDictionary *)arg2 comment:(NSString *)arg3;
- (void)searchStoryRatingView:(SCSearchStoryRatingView *)arg1 didTapOnAttachmentView:(UIImageView *)arg2;
- (void)searchStoryRatingViewDidCancel:(SCSearchStoryRatingView *)arg1;
@end

