//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;

@interface SCSpectaclesDepthDownloadInfo : NSObject
{
    NSError *_error;
    NSMutableArray *_progressHandlers;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (id)init;
@property(retain, nonatomic) NSMutableArray *progressHandlers; // @synthesize progressHandlers=_progressHandlers;

@end

