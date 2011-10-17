/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject  {
    MPQueueFeeder *_feeder;
    unsigned int _currentItemIndex;
    double _currentTime;
    int _feederMode;
}

@property(retain) MPQueueFeeder * feeder;
@property unsigned int currentItemIndex;
@property double currentTime;
@property int feederMode;


- (void)setCurrentItemIndex:(unsigned int)arg1;
- (unsigned int)currentItemIndex;
- (id)initWithStateOfAVController:(id)arg1;
- (int)feederMode;
- (void)setFeederMode:(int)arg1;
- (void)setFeeder:(id)arg1;
- (id)feeder;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (id)description;
- (void)dealloc;

@end