//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURL;

@interface ANSCompressLogOperation : NSOperation
{
    NSURL *_uncompressedLogURL;
    NSURL *_compressedLogURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *compressedLogURL; // @synthesize compressedLogURL=_compressedLogURL;
- (id)compressedURLForUncompressedURL:(id)arg1;
- (id)initWithUncompressedLogURL:(id)arg1 compressedLogURL:(id)arg2;
- (void)main;
@property(retain, nonatomic) NSURL *uncompressedLogURL; // @synthesize uncompressedLogURL=_uncompressedLogURL;

@end
