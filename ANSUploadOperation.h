//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ANSUploader, NSString, NSURL;

@interface ANSUploadOperation : NSOperation
{
    ANSUploader *_uploader;
    NSURL *_answersURL;
    NSString *_apiKey;
    NSURL *_multipartURL;
    NSString *_multipartMimeBoundary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *answersURL; // @synthesize answersURL=_answersURL;
@property(readonly, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (id)currentTimestampString;
- (id)initWithUploader:(id)arg1 answersURL:(id)arg2 apiKey:(id)arg3 multipartURL:(id)arg4 multipartMimeBoundary:(id)arg5;
- (void)main;
@property(readonly, nonatomic) NSString *multipartMimeBoundary; // @synthesize multipartMimeBoundary=_multipartMimeBoundary;
@property(readonly, nonatomic) NSURL *multipartURL; // @synthesize multipartURL=_multipartURL;
@property(readonly, nonatomic) ANSUploader *uploader; // @synthesize uploader=_uploader;

@end
