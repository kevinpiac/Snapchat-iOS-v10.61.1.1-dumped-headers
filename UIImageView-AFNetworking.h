//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface UIImageView (AFNetworking)
+ (id)af_sharedImageCache;
+ (id)af_sharedImageRequestOperationQueue;
- (id)af_imageRequestOperation;
- (void)af_setImageRequestOperation:(id)arg1;
- (void)cancelImageRequestOperation;
- (void)setImageWithURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@end

