//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Media, NSData, NSString;

@protocol MediaUploadDelegate <NSObject>
- (NSData *)encryptedMediaDataToUpload:(NSData *)arg1;
- (void)mediaUploadDidFailForMedia:(Media *)arg1;
- (void)mediaUploadDidSucceedForMedia:(Media *)arg1;
- (NSString *)uploadMediaIdForMedia:(Media *)arg1;
- (long long)uploadMediaTypeForMedia:(Media *)arg1;
- (NSString *)uploadRequestKeyForMedia:(Media *)arg1;

@optional
- (void)mediaUploadDidLoseMediaData:(Media *)arg1;
- (void)mediaUploadDidStart:(Media *)arg1;
@end

